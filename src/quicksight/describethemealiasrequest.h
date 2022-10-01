// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMEALIASREQUEST_H
#define QTAWS_DESCRIBETHEMEALIASREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemeAliasRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeThemeAliasRequest : public QuickSightRequest {

public:
    DescribeThemeAliasRequest(const DescribeThemeAliasRequest &other);
    DescribeThemeAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThemeAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
