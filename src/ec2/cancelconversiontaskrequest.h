// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCONVERSIONTASKREQUEST_H
#define QTAWS_CANCELCONVERSIONTASKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CancelConversionTaskRequestPrivate;

class QTAWSEC2_EXPORT CancelConversionTaskRequest : public Ec2Request {

public:
    CancelConversionTaskRequest(const CancelConversionTaskRequest &other);
    CancelConversionTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelConversionTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
