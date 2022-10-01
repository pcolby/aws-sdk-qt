// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_H
#define QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_H

#include "mgnresponse.h"
#include "deletereplicationconfigurationtemplaterequest.h"

namespace QtAws {
namespace Mgn {

class DeleteReplicationConfigurationTemplateResponsePrivate;

class QTAWSMGN_EXPORT DeleteReplicationConfigurationTemplateResponse : public MgnResponse {
    Q_OBJECT

public:
    DeleteReplicationConfigurationTemplateResponse(const DeleteReplicationConfigurationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReplicationConfigurationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationConfigurationTemplateResponse)
    Q_DISABLE_COPY(DeleteReplicationConfigurationTemplateResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
