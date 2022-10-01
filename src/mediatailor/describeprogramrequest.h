// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROGRAMREQUEST_H
#define QTAWS_DESCRIBEPROGRAMREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeProgramRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT DescribeProgramRequest : public MediaTailorRequest {

public:
    DescribeProgramRequest(const DescribeProgramRequest &other);
    DescribeProgramRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProgramRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
