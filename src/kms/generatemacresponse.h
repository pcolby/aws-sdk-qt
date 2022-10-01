// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEMACRESPONSE_H
#define QTAWS_GENERATEMACRESPONSE_H

#include "kmsresponse.h"
#include "generatemacrequest.h"

namespace QtAws {
namespace Kms {

class GenerateMacResponsePrivate;

class QTAWSKMS_EXPORT GenerateMacResponse : public KmsResponse {
    Q_OBJECT

public:
    GenerateMacResponse(const GenerateMacRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateMacRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateMacResponse)
    Q_DISABLE_COPY(GenerateMacResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
