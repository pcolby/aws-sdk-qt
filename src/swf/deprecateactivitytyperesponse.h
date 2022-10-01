// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEACTIVITYTYPERESPONSE_H
#define QTAWS_DEPRECATEACTIVITYTYPERESPONSE_H

#include "swfresponse.h"
#include "deprecateactivitytyperequest.h"

namespace QtAws {
namespace Swf {

class DeprecateActivityTypeResponsePrivate;

class QTAWSSWF_EXPORT DeprecateActivityTypeResponse : public SwfResponse {
    Q_OBJECT

public:
    DeprecateActivityTypeResponse(const DeprecateActivityTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeprecateActivityTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateActivityTypeResponse)
    Q_DISABLE_COPY(DeprecateActivityTypeResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
