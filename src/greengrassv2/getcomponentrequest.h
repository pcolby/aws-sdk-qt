// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTREQUEST_H
#define QTAWS_GETCOMPONENTREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class GetComponentRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT GetComponentRequest : public GreengrassV2Request {

public:
    GetComponentRequest(const GetComponentRequest &other);
    GetComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComponentRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
