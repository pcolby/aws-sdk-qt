// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_H
#define QTAWS_CREATEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_H

#include "mgnresponse.h"
#include "createreplicationconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class CreateReplicationConfigurationTemplateResponsePrivate;

class QTAWSMGN_EXPORT CreateReplicationConfigurationTemplateResponse : public MgnResponse {
    Q_OBJECT

public:
    CreateReplicationConfigurationTemplateResponse(const CreateReplicationConfigurationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReplicationConfigurationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationConfigurationTemplateResponse)
    Q_DISABLE_COPY(CreateReplicationConfigurationTemplateResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
