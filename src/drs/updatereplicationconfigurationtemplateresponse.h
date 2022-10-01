// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_H

#include "drsresponse.h"
#include "updatereplicationconfigurationtemplaterequest.h"

namespace QtAws {
namespace Drs {

class UpdateReplicationConfigurationTemplateResponsePrivate;

class QTAWSDRS_EXPORT UpdateReplicationConfigurationTemplateResponse : public DrsResponse {
    Q_OBJECT

public:
    UpdateReplicationConfigurationTemplateResponse(const UpdateReplicationConfigurationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReplicationConfigurationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReplicationConfigurationTemplateResponse)
    Q_DISABLE_COPY(UpdateReplicationConfigurationTemplateResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
