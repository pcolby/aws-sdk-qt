// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOIPPOOLRESPONSE_H
#define QTAWS_CREATECOIPPOOLRESPONSE_H

#include "ec2response.h"
#include "createcoippoolrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCoipPoolResponsePrivate;

class QTAWSEC2_EXPORT CreateCoipPoolResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateCoipPoolResponse(const CreateCoipPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCoipPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCoipPoolResponse)
    Q_DISABLE_COPY(CreateCoipPoolResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
