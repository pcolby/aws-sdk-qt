// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITYRECOGNIZERRESPONSE_H
#define QTAWS_CREATEENTITYRECOGNIZERRESPONSE_H

#include "comprehendresponse.h"
#include "createentityrecognizerrequest.h"

namespace QtAws {
namespace Comprehend {

class CreateEntityRecognizerResponsePrivate;

class QTAWSCOMPREHEND_EXPORT CreateEntityRecognizerResponse : public ComprehendResponse {
    Q_OBJECT

public:
    CreateEntityRecognizerResponse(const CreateEntityRecognizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEntityRecognizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEntityRecognizerResponse)
    Q_DISABLE_COPY(CreateEntityRecognizerResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
