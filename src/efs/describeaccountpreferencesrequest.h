// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTPREFERENCESREQUEST_H
#define QTAWS_DESCRIBEACCOUNTPREFERENCESREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeAccountPreferencesRequestPrivate;

class QTAWSEFS_EXPORT DescribeAccountPreferencesRequest : public EfsRequest {

public:
    DescribeAccountPreferencesRequest(const DescribeAccountPreferencesRequest &other);
    DescribeAccountPreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountPreferencesRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
