// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIDFORMATREQUEST_H
#define QTAWS_MODIFYIDFORMATREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyIdFormatRequestPrivate;

class QTAWSEC2_EXPORT ModifyIdFormatRequest : public Ec2Request {

public:
    ModifyIdFormatRequest(const ModifyIdFormatRequest &other);
    ModifyIdFormatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
