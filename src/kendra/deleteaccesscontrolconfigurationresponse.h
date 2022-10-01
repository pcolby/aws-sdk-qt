// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSCONTROLCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEACCESSCONTROLCONFIGURATIONRESPONSE_H

#include "kendraresponse.h"
#include "deleteaccesscontrolconfigurationrequest.h"

namespace QtAws {
namespace Kendra {

class DeleteAccessControlConfigurationResponsePrivate;

class QTAWSKENDRA_EXPORT DeleteAccessControlConfigurationResponse : public KendraResponse {
    Q_OBJECT

public:
    DeleteAccessControlConfigurationResponse(const DeleteAccessControlConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccessControlConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessControlConfigurationResponse)
    Q_DISABLE_COPY(DeleteAccessControlConfigurationResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
