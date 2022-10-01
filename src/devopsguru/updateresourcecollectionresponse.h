// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCECOLLECTIONRESPONSE_H
#define QTAWS_UPDATERESOURCECOLLECTIONRESPONSE_H

#include "devopsgururesponse.h"
#include "updateresourcecollectionrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateResourceCollectionResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT UpdateResourceCollectionResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    UpdateResourceCollectionResponse(const UpdateResourceCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResourceCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceCollectionResponse)
    Q_DISABLE_COPY(UpdateResourceCollectionResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
