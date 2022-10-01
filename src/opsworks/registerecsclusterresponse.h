// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERECSCLUSTERRESPONSE_H
#define QTAWS_REGISTERECSCLUSTERRESPONSE_H

#include "opsworksresponse.h"
#include "registerecsclusterrequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterEcsClusterResponsePrivate;

class QTAWSOPSWORKS_EXPORT RegisterEcsClusterResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    RegisterEcsClusterResponse(const RegisterEcsClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterEcsClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterEcsClusterResponse)
    Q_DISABLE_COPY(RegisterEcsClusterResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
