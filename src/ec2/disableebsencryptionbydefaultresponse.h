// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEEBSENCRYPTIONBYDEFAULTRESPONSE_H
#define QTAWS_DISABLEEBSENCRYPTIONBYDEFAULTRESPONSE_H

#include "ec2response.h"
#include "disableebsencryptionbydefaultrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableEbsEncryptionByDefaultResponsePrivate;

class QTAWSEC2_EXPORT DisableEbsEncryptionByDefaultResponse : public Ec2Response {
    Q_OBJECT

public:
    DisableEbsEncryptionByDefaultResponse(const DisableEbsEncryptionByDefaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableEbsEncryptionByDefaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableEbsEncryptionByDefaultResponse)
    Q_DISABLE_COPY(DisableEbsEncryptionByDefaultResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
