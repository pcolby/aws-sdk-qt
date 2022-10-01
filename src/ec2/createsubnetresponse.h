// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETRESPONSE_H
#define QTAWS_CREATESUBNETRESPONSE_H

#include "ec2response.h"
#include "createsubnetrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateSubnetResponsePrivate;

class QTAWSEC2_EXPORT CreateSubnetResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateSubnetResponse(const CreateSubnetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSubnetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubnetResponse)
    Q_DISABLE_COPY(CreateSubnetResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
