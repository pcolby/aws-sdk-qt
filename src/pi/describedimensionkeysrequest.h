// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIMENSIONKEYSREQUEST_H
#define QTAWS_DESCRIBEDIMENSIONKEYSREQUEST_H

#include "pirequest.h"

namespace QtAws {
namespace Pi {

class DescribeDimensionKeysRequestPrivate;

class QTAWSPI_EXPORT DescribeDimensionKeysRequest : public PiRequest {

public:
    DescribeDimensionKeysRequest(const DescribeDimensionKeysRequest &other);
    DescribeDimensionKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDimensionKeysRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
