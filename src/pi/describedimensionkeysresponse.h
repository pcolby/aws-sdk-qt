// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIMENSIONKEYSRESPONSE_H
#define QTAWS_DESCRIBEDIMENSIONKEYSRESPONSE_H

#include "piresponse.h"
#include "describedimensionkeysrequest.h"

namespace QtAws {
namespace Pi {

class DescribeDimensionKeysResponsePrivate;

class QTAWSPI_EXPORT DescribeDimensionKeysResponse : public PiResponse {
    Q_OBJECT

public:
    DescribeDimensionKeysResponse(const DescribeDimensionKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDimensionKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDimensionKeysResponse)
    Q_DISABLE_COPY(DescribeDimensionKeysResponse)

};

} // namespace Pi
} // namespace QtAws

#endif
