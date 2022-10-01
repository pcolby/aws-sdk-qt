// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIDENTITYIDFORMATRESPONSE_H
#define QTAWS_MODIFYIDENTITYIDFORMATRESPONSE_H

#include "ec2response.h"
#include "modifyidentityidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyIdentityIdFormatResponsePrivate;

class QTAWSEC2_EXPORT ModifyIdentityIdFormatResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyIdentityIdFormatResponse(const ModifyIdentityIdFormatRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyIdentityIdFormatRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyIdentityIdFormatResponse)
    Q_DISABLE_COPY(ModifyIdentityIdFormatResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
