// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIAMINSTANCEPROFILERESPONSE_H
#define QTAWS_ASSOCIATEIAMINSTANCEPROFILERESPONSE_H

#include "ec2response.h"
#include "associateiaminstanceprofilerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateIamInstanceProfileResponsePrivate;

class QTAWSEC2_EXPORT AssociateIamInstanceProfileResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateIamInstanceProfileResponse(const AssociateIamInstanceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateIamInstanceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateIamInstanceProfileResponse)
    Q_DISABLE_COPY(AssociateIamInstanceProfileResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
