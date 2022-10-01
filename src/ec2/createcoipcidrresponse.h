// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOIPCIDRRESPONSE_H
#define QTAWS_CREATECOIPCIDRRESPONSE_H

#include "ec2response.h"
#include "createcoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCoipCidrResponsePrivate;

class QTAWSEC2_EXPORT CreateCoipCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateCoipCidrResponse(const CreateCoipCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCoipCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCoipCidrResponse)
    Q_DISABLE_COPY(CreateCoipCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
