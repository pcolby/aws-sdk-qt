/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEBOTLOCALERESPONSE_H
#define QTAWS_CREATEBOTLOCALERESPONSE_H

#include "lexmodelsv2response.h"
#include "createbotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotLocaleResponsePrivate;

class QTAWS_EXPORT CreateBotLocaleResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    CreateBotLocaleResponse(const CreateBotLocaleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBotLocaleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBotLocaleResponse)
    Q_DISABLE_COPY(CreateBotLocaleResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
