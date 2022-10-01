// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMOUNTTARGETSREQUEST_H
#define QTAWS_DESCRIBEMOUNTTARGETSREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeMountTargetsRequestPrivate;

class QTAWSEFS_EXPORT DescribeMountTargetsRequest : public EfsRequest {

public:
    DescribeMountTargetsRequest(const DescribeMountTargetsRequest &other);
    DescribeMountTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMountTargetsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
