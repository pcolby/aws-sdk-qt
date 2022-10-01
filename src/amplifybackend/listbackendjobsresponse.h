// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKENDJOBSRESPONSE_H
#define QTAWS_LISTBACKENDJOBSRESPONSE_H

#include "amplifybackendresponse.h"
#include "listbackendjobsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ListBackendJobsResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT ListBackendJobsResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    ListBackendJobsResponse(const ListBackendJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBackendJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackendJobsResponse)
    Q_DISABLE_COPY(ListBackendJobsResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
