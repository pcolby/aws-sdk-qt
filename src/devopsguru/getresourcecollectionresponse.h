// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCECOLLECTIONRESPONSE_H
#define QTAWS_GETRESOURCECOLLECTIONRESPONSE_H

#include "devopsgururesponse.h"
#include "getresourcecollectionrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class GetResourceCollectionResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT GetResourceCollectionResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    GetResourceCollectionResponse(const GetResourceCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceCollectionResponse)
    Q_DISABLE_COPY(GetResourceCollectionResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
