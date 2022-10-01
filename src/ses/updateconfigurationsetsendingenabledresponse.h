// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETSENDINGENABLEDRESPONSE_H
#define QTAWS_UPDATECONFIGURATIONSETSENDINGENABLEDRESPONSE_H

#include "sesresponse.h"
#include "updateconfigurationsetsendingenabledrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetSendingEnabledResponsePrivate;

class QTAWSSES_EXPORT UpdateConfigurationSetSendingEnabledResponse : public SesResponse {
    Q_OBJECT

public:
    UpdateConfigurationSetSendingEnabledResponse(const UpdateConfigurationSetSendingEnabledRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigurationSetSendingEnabledRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetSendingEnabledResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetSendingEnabledResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
