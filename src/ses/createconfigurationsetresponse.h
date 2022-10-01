// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETRESPONSE_H
#define QTAWS_CREATECONFIGURATIONSETRESPONSE_H

#include "sesresponse.h"
#include "createconfigurationsetrequest.h"

namespace QtAws {
namespace Ses {

class CreateConfigurationSetResponsePrivate;

class QTAWSSES_EXPORT CreateConfigurationSetResponse : public SesResponse {
    Q_OBJECT

public:
    CreateConfigurationSetResponse(const CreateConfigurationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConfigurationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationSetResponse)
    Q_DISABLE_COPY(CreateConfigurationSetResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
