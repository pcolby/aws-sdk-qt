// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOLUTIONVERSIONRESPONSE_H
#define QTAWS_DESCRIBESOLUTIONVERSIONRESPONSE_H

#include "personalizeresponse.h"
#include "describesolutionversionrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeSolutionVersionResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeSolutionVersionResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeSolutionVersionResponse(const DescribeSolutionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSolutionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSolutionVersionResponse)
    Q_DISABLE_COPY(DescribeSolutionVersionResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
