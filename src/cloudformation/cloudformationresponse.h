// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDFORMATIONRESPONSE_H
#define QTAWS_CLOUDFORMATIONRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloudformationglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudFormation {

class CloudFormationResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT CloudFormationResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudFormationResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudFormationResponse(CloudFormationResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudFormationResponse)
    Q_DISABLE_COPY(CloudFormationResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
