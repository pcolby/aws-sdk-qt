// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEDOMAINRESPONSE_H
#define QTAWS_DEPRECATEDOMAINRESPONSE_H

#include "swfresponse.h"
#include "deprecatedomainrequest.h"

namespace QtAws {
namespace Swf {

class DeprecateDomainResponsePrivate;

class QTAWSSWF_EXPORT DeprecateDomainResponse : public SwfResponse {
    Q_OBJECT

public:
    DeprecateDomainResponse(const DeprecateDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeprecateDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateDomainResponse)
    Q_DISABLE_COPY(DeprecateDomainResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
