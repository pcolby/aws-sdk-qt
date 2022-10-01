// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEDOMAINRESPONSE_H
#define QTAWS_UNDEPRECATEDOMAINRESPONSE_H

#include "swfresponse.h"
#include "undeprecatedomainrequest.h"

namespace QtAws {
namespace Swf {

class UndeprecateDomainResponsePrivate;

class QTAWSSWF_EXPORT UndeprecateDomainResponse : public SwfResponse {
    Q_OBJECT

public:
    UndeprecateDomainResponse(const UndeprecateDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UndeprecateDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UndeprecateDomainResponse)
    Q_DISABLE_COPY(UndeprecateDomainResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
