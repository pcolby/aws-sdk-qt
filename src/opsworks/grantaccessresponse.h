// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTACCESSRESPONSE_H
#define QTAWS_GRANTACCESSRESPONSE_H

#include "opsworksresponse.h"
#include "grantaccessrequest.h"

namespace QtAws {
namespace OpsWorks {

class GrantAccessResponsePrivate;

class QTAWSOPSWORKS_EXPORT GrantAccessResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    GrantAccessResponse(const GrantAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GrantAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GrantAccessResponse)
    Q_DISABLE_COPY(GrantAccessResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
