// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDEXPORTJOBREQUEST_H
#define QTAWS_DESCRIBEWORLDEXPORTJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldExportJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT DescribeWorldExportJobRequest : public RoboMakerRequest {

public:
    DescribeWorldExportJobRequest(const DescribeWorldExportJobRequest &other);
    DescribeWorldExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorldExportJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
