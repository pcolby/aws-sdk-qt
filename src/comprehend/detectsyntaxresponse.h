// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSYNTAXRESPONSE_H
#define QTAWS_DETECTSYNTAXRESPONSE_H

#include "comprehendresponse.h"
#include "detectsyntaxrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectSyntaxResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DetectSyntaxResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DetectSyntaxResponse(const DetectSyntaxRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectSyntaxRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectSyntaxResponse)
    Q_DISABLE_COPY(DetectSyntaxResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
