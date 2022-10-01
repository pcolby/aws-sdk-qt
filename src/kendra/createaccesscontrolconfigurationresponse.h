// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSCONTROLCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEACCESSCONTROLCONFIGURATIONRESPONSE_H

#include "kendraresponse.h"
#include "createaccesscontrolconfigurationrequest.h"

namespace QtAws {
namespace Kendra {

class CreateAccessControlConfigurationResponsePrivate;

class QTAWSKENDRA_EXPORT CreateAccessControlConfigurationResponse : public KendraResponse {
    Q_OBJECT

public:
    CreateAccessControlConfigurationResponse(const CreateAccessControlConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccessControlConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessControlConfigurationResponse)
    Q_DISABLE_COPY(CreateAccessControlConfigurationResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
