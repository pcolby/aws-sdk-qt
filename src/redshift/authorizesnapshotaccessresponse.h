// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZESNAPSHOTACCESSRESPONSE_H
#define QTAWS_AUTHORIZESNAPSHOTACCESSRESPONSE_H

#include "redshiftresponse.h"
#include "authorizesnapshotaccessrequest.h"

namespace QtAws {
namespace Redshift {

class AuthorizeSnapshotAccessResponsePrivate;

class QTAWSREDSHIFT_EXPORT AuthorizeSnapshotAccessResponse : public RedshiftResponse {
    Q_OBJECT

public:
    AuthorizeSnapshotAccessResponse(const AuthorizeSnapshotAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AuthorizeSnapshotAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeSnapshotAccessResponse)
    Q_DISABLE_COPY(AuthorizeSnapshotAccessResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
