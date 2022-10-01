// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEACTIVITYTYPERESPONSE_H
#define QTAWS_UNDEPRECATEACTIVITYTYPERESPONSE_H

#include "swfresponse.h"
#include "undeprecateactivitytyperequest.h"

namespace QtAws {
namespace Swf {

class UndeprecateActivityTypeResponsePrivate;

class QTAWSSWF_EXPORT UndeprecateActivityTypeResponse : public SwfResponse {
    Q_OBJECT

public:
    UndeprecateActivityTypeResponse(const UndeprecateActivityTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UndeprecateActivityTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UndeprecateActivityTypeResponse)
    Q_DISABLE_COPY(UndeprecateActivityTypeResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
