// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYRECOGNIZERRESPONSE_H
#define QTAWS_DELETEENTITYRECOGNIZERRESPONSE_H

#include "comprehendresponse.h"
#include "deleteentityrecognizerrequest.h"

namespace QtAws {
namespace Comprehend {

class DeleteEntityRecognizerResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DeleteEntityRecognizerResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DeleteEntityRecognizerResponse(const DeleteEntityRecognizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEntityRecognizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEntityRecognizerResponse)
    Q_DISABLE_COPY(DeleteEntityRecognizerResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
