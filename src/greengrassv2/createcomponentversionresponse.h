// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPONENTVERSIONRESPONSE_H
#define QTAWS_CREATECOMPONENTVERSIONRESPONSE_H

#include "greengrassv2response.h"
#include "createcomponentversionrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class CreateComponentVersionResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT CreateComponentVersionResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    CreateComponentVersionResponse(const CreateComponentVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateComponentVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateComponentVersionResponse)
    Q_DISABLE_COPY(CreateComponentVersionResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
