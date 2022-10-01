// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEREQUEST_H
#define QTAWS_DESCRIBEAPPINSTANCEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DescribeAppInstanceRequestPrivate;

class QTAWSCHIME_EXPORT DescribeAppInstanceRequest : public ChimeRequest {

public:
    DescribeAppInstanceRequest(const DescribeAppInstanceRequest &other);
    DescribeAppInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
