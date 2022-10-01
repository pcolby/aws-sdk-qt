// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSHAREAPPLICATIONRESPONSE_H
#define QTAWS_UNSHAREAPPLICATIONRESPONSE_H

#include "serverlessapplicationrepositoryresponse.h"
#include "unshareapplicationrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class UnshareApplicationResponsePrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT UnshareApplicationResponse : public ServerlessApplicationRepositoryResponse {
    Q_OBJECT

public:
    UnshareApplicationResponse(const UnshareApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnshareApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnshareApplicationResponse)
    Q_DISABLE_COPY(UnshareApplicationResponse)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
