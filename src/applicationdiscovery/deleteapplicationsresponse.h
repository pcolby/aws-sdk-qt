// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONSRESPONSE_H
#define QTAWS_DELETEAPPLICATIONSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "deleteapplicationsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DeleteApplicationsResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DeleteApplicationsResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    DeleteApplicationsResponse(const DeleteApplicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApplicationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationsResponse)
    Q_DISABLE_COPY(DeleteApplicationsResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
