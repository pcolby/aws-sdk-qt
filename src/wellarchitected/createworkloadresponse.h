// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKLOADRESPONSE_H
#define QTAWS_CREATEWORKLOADRESPONSE_H

#include "wellarchitectedresponse.h"
#include "createworkloadrequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateWorkloadResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT CreateWorkloadResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    CreateWorkloadResponse(const CreateWorkloadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkloadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkloadResponse)
    Q_DISABLE_COPY(CreateWorkloadResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
