// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECIPEREQUEST_H
#define QTAWS_DESCRIBERECIPEREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeRecipeRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeRecipeRequest : public PersonalizeRequest {

public:
    DescribeRecipeRequest(const DescribeRecipeRequest &other);
    DescribeRecipeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecipeRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
