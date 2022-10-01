// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELUNACLIENTRESPONSE_H
#define QTAWS_DESCRIBELUNACLIENTRESPONSE_H

#include "cloudhsmresponse.h"
#include "describelunaclientrequest.h"

namespace QtAws {
namespace CloudHsm {

class DescribeLunaClientResponsePrivate;

class QTAWSCLOUDHSM_EXPORT DescribeLunaClientResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    DescribeLunaClientResponse(const DescribeLunaClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLunaClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLunaClientResponse)
    Q_DISABLE_COPY(DescribeLunaClientResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
