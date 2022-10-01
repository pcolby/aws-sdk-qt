// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYDKIMENABLEDRESPONSE_H
#define QTAWS_SETIDENTITYDKIMENABLEDRESPONSE_H

#include "sesresponse.h"
#include "setidentitydkimenabledrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityDkimEnabledResponsePrivate;

class QTAWSSES_EXPORT SetIdentityDkimEnabledResponse : public SesResponse {
    Q_OBJECT

public:
    SetIdentityDkimEnabledResponse(const SetIdentityDkimEnabledRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetIdentityDkimEnabledRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityDkimEnabledResponse)
    Q_DISABLE_COPY(SetIdentityDkimEnabledResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
