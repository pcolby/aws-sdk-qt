// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPROJECTSESSIONACTIONRESPONSE_H
#define QTAWS_SENDPROJECTSESSIONACTIONRESPONSE_H

#include "databrewresponse.h"
#include "sendprojectsessionactionrequest.h"

namespace QtAws {
namespace DataBrew {

class SendProjectSessionActionResponsePrivate;

class QTAWSDATABREW_EXPORT SendProjectSessionActionResponse : public DataBrewResponse {
    Q_OBJECT

public:
    SendProjectSessionActionResponse(const SendProjectSessionActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendProjectSessionActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendProjectSessionActionResponse)
    Q_DISABLE_COPY(SendProjectSessionActionResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
