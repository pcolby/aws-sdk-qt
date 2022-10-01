// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOIPCIDRREQUEST_H
#define QTAWS_DELETECOIPCIDRREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteCoipCidrRequestPrivate;

class QTAWSEC2_EXPORT DeleteCoipCidrRequest : public Ec2Request {

public:
    DeleteCoipCidrRequest(const DeleteCoipCidrRequest &other);
    DeleteCoipCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
