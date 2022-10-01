// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATEALIASREQUEST_H
#define QTAWS_DESCRIBETEMPLATEALIASREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplateAliasRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeTemplateAliasRequest : public QuickSightRequest {

public:
    DescribeTemplateAliasRequest(const DescribeTemplateAliasRequest &other);
    DescribeTemplateAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTemplateAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
