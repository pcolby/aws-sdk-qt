// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIVESOURCERESPONSE_H
#define QTAWS_DESCRIBELIVESOURCERESPONSE_H

#include "mediatailorresponse.h"
#include "describelivesourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeLiveSourceResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT DescribeLiveSourceResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    DescribeLiveSourceResponse(const DescribeLiveSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLiveSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLiveSourceResponse)
    Q_DISABLE_COPY(DescribeLiveSourceResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
