// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSCONTROLCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEACCESSCONTROLCONFIGURATIONRESPONSE_H

#include "kendraresponse.h"
#include "updateaccesscontrolconfigurationrequest.h"

namespace QtAws {
namespace Kendra {

class UpdateAccessControlConfigurationResponsePrivate;

class QTAWSKENDRA_EXPORT UpdateAccessControlConfigurationResponse : public KendraResponse {
    Q_OBJECT

public:
    UpdateAccessControlConfigurationResponse(const UpdateAccessControlConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAccessControlConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccessControlConfigurationResponse)
    Q_DISABLE_COPY(UpdateAccessControlConfigurationResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
