// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMRESPONSE_H
#define QTAWS_MODIFYIPAMRESPONSE_H

#include "ec2response.h"
#include "modifyipamrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamResponsePrivate;

class QTAWSEC2_EXPORT ModifyIpamResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyIpamResponse(const ModifyIpamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyIpamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyIpamResponse)
    Q_DISABLE_COPY(ModifyIpamResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
