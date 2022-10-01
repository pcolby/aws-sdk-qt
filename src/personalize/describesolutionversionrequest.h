// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOLUTIONVERSIONREQUEST_H
#define QTAWS_DESCRIBESOLUTIONVERSIONREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeSolutionVersionRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeSolutionVersionRequest : public PersonalizeRequest {

public:
    DescribeSolutionVersionRequest(const DescribeSolutionVersionRequest &other);
    DescribeSolutionVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSolutionVersionRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
