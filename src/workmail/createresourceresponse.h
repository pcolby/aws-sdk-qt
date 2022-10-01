// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCERESPONSE_H
#define QTAWS_CREATERESOURCERESPONSE_H

#include "workmailresponse.h"
#include "createresourcerequest.h"

namespace QtAws {
namespace WorkMail {

class CreateResourceResponsePrivate;

class QTAWSWORKMAIL_EXPORT CreateResourceResponse : public WorkMailResponse {
    Q_OBJECT

public:
    CreateResourceResponse(const CreateResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceResponse)
    Q_DISABLE_COPY(CreateResourceResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
